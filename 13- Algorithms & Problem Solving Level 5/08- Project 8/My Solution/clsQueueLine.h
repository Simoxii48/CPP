#pragma once

#include <iostream>
#include <queue>
#include <stack>
#include <iomanip>
#include <string>
#include "clsDate.h"

using namespace std;

class clsQueueLine
{
private:

	struct stQueue
	{
	public:
		string Prefix;
		short TotalTickets = 0;
		short ServedClients = 0;
		short WaitingClients = 0;
	};

	struct stTicket
	{
	public:
		string Prefix;
		string TimeIssued;
		short WaitingClients = 0;
		short ServeTime = 0;
	};

	stQueue _GlobalQueue;
	stTicket _GlobalTicket;
	short _ServeTime;
	short _Counter = 1;

	queue<stTicket> myQueue;

	void _PrintTicket(stTicket ticket)
	{
		cout << setw(30) << left << "" << "==============================" << endl;
		cout << setw(30) << left << "" << "\t\tTicket Info" << endl;
		cout << setw(30) << left << "" << "==============================" << endl << endl;

		cout << setw(45) << left << "" << ticket.Prefix << endl << endl;
		cout << setw(35) << left << "" << ticket.TimeIssued << endl;
		cout << setw(35) << left << "" << "Waiting Clients : " << ticket.WaitingClients << endl;
		cout << setw(38) << left << "" << "Serve Time In" << endl;
		cout << setw(39) << left << "" << ticket.ServeTime << " Minutes." << endl;
		cout << setw(30) << left << "" << "==============================" << endl << endl;
	}

	string _TicketDateIssued()
	{
		return clsDate::GetSystemDateHour();
	}

	queue<stTicket> _Reverse(queue<stTicket> myQueue)
	{
		stack<stTicket> tempStack;
		queue<stTicket> temp;

		while (!myQueue.empty())
		{
			tempStack.push(myQueue.front());
			myQueue.pop();
		}
		
		while (!tempStack.empty())
		{
			temp.push(tempStack.top());
			tempStack.pop(); 
		}
		
		return temp;
	}

public:
	clsQueueLine(string Prefix, short ServiceTime)
	{
		_GlobalQueue.Prefix = Prefix;
		_ServeTime = ServiceTime;
	}

	void IssueTicket()
	{
		_GlobalTicket.TimeIssued = _TicketDateIssued();

		if (myQueue.empty())
		{
			_GlobalTicket.WaitingClients = 0;
			_GlobalTicket.ServeTime = 0;
			_GlobalTicket.Prefix = _GlobalQueue.Prefix + "1";
		}
		else
		{
			_GlobalTicket.WaitingClients++;
			_GlobalTicket.ServeTime += _ServeTime;
			_GlobalTicket.Prefix = _GlobalQueue.Prefix + to_string(++_Counter);
		}

		_GlobalQueue.TotalTickets++;
		_GlobalQueue.WaitingClients++;

		myQueue.push(_GlobalTicket);
	}

	void PrintInfo()
	{
		cout << endl;
		cout << setw(30) << left << "" << "==============================" << endl;
		cout << setw(30) << left << "" << "\t\tQueue Info" << endl;
		cout << setw(30) << left << "" << "==============================" << endl << endl;

		cout << setw(30) << left << "" << "\tPrefix          : " << _GlobalQueue.Prefix << endl << endl;
		cout << setw(30) << left << "" << "\tTotal Tickets   : " << _GlobalQueue.TotalTickets << endl;
		cout << setw(30) << left << "" << "\tServed Clients  : " << _GlobalQueue.ServedClients << endl;
		cout << setw(30) << left << "" << "\tWaiting Clients : " << _GlobalQueue.WaitingClients << endl;
		cout << setw(30) << left << "" << "==============================" << endl << endl;
	}

	void ServeClient()
	{
		_GlobalQueue.ServedClients += 1;
		_GlobalQueue.WaitingClients -= 1;
		_GlobalQueue.TotalTickets -= 1;

		PrintInfo();
	}

	void PrintAllTickets()
	{
		while (!myQueue.empty())
		{
			_PrintTicket(myQueue.front());
			myQueue.pop();
		}
	}

	void PrintTicketsLineRTL()
	{
		queue <stTicket> temp = myQueue;

		cout << setw(30) << left << "" << "Tickets : ";
		while (!temp.empty())
		{
			cout << temp.front().Prefix << " <-- ";
			temp.pop();
		}
		cout << endl;
	}

	void PrintTicketsLineLTR()
	{
		queue <stTicket> temp = _Reverse(myQueue);

		cout << setw(30) << left << "" << "Tickets : ";
		while (!temp.empty())
		{
			cout << temp.front().Prefix << " --> ";
			temp.pop();
		}
		cout << endl;
	}
};