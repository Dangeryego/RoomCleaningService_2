//PSEUDOCODE
//    -Promt the user to input the Number or rooms
//    -Display Number of rooms
//    -Display Prices per room
//    -Display Sales Tax
//    -Display Cost (Number of rooms * Price per room)
//    -Display Estimate (Number of room * price per room) + Sales tax

#include <iostream>

using namespace std;

int main()
{
    int noOfSmallRooms {0}, noOfLargeRooms {0};
    const double pricePerSmallRoom {24.268}, pricePerLargeRoom {29.248}, salesTax {2.324};
    cout << "\n\t\t\tHello Welcome to room cleaning service" << "\n\n----Please take a look at our Charges" << endl;
    cout << "Charges For Small room is: $" << pricePerSmallRoom << "\nCharges for large room is: $" << pricePerLargeRoom << endl;
    cout << "Sales Tax: $" << salesTax << "\nPlease enter your Number of Small rooms: ";
    cin >> noOfSmallRooms;
    cout << "Please Enter your number of large rooms: ";
    cin >> noOfLargeRooms;
    cout << "\n\n----------------------------------------------------------------------------" << endl;
    float costOfSmallRoom = noOfSmallRooms * pricePerSmallRoom;
    float costOfLargeRoom = noOfLargeRooms * pricePerLargeRoom;
    float totalCost = costOfLargeRoom + costOfSmallRoom;
    float estimate = totalCost + salesTax;
    int destimate = totalCost + salesTax;
    cout << "\n\nThe cost of small room is: $"<<costOfSmallRoom << "\n"
         << "The cost of large room is: $" << costOfLargeRoom << "\n"
         << "The total cost of your room is: $" << totalCost << endl;
    cout << "Your Estimate is: $" << estimate << "\nEstimate after discount: $" << destimate <<endl;
    cout << "you saved: $" << estimate - destimate;


    return 0;
}
