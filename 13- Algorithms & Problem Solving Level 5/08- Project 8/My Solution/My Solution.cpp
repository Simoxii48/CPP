#include <iostream>
#include "clsQueueLine.h"

using namespace std;

int main()
{
    clsQueueLine PayBillsQueue("A0", 10);
    clsQueueLine SubscriptionsQueue("B0", 5);

    PayBillsQueue.IssueTicket();
    PayBillsQueue.IssueTicket();
    PayBillsQueue.IssueTicket();
    PayBillsQueue.IssueTicket();
    PayBillsQueue.IssueTicket();

    cout << "\nPay bills Queue Info :\n\n";
    PayBillsQueue.PrintInfo();

    PayBillsQueue.PrintTicketsLineRTL();
    PayBillsQueue.PrintTicketsLineLTR();

    cout << "\n\nPrinting All available tickets :\n\n";
    PayBillsQueue.PrintAllTickets();

    cout << "\nPay Bills Queue  after serving One Client :\n\n";
    PayBillsQueue.ServeClient();

    cout << endl;

    cout << "\nSubscriptions Queue Info :\n\n";

    SubscriptionsQueue.IssueTicket();
    SubscriptionsQueue.IssueTicket();
    SubscriptionsQueue.IssueTicket();

    SubscriptionsQueue.PrintInfo();

    SubscriptionsQueue.PrintTicketsLineRTL();
    SubscriptionsQueue.PrintTicketsLineLTR();

    cout << "\n\nPrinting All available tickets :\n\n";
    SubscriptionsQueue.PrintAllTickets();

    cout << "\nSubscriptions Queue  after serving One Client :\n\n";
    SubscriptionsQueue.ServeClient();
}