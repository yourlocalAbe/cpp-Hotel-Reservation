#include <iostream>
#include <string>
#include "Room_Type.hpp"
#include "booking.hpp"
#include "About_Hotel.hpp"

using namespace std;

class Home_page {
    public:
        void homepage () {
            Room room;
            Booking book;
            About_Hotel hotel;

            while (true) {
                int choice;
                cout << "======================================================================================================================\n"
                     << "                        Welcome to our hotel! We only provide the best room with the best price.\n"
                     << "======================================================================================================================\n"
                     << "Please choose one of these option of your choice to proceed!\n"
                     << "1. Reservation\n"
                     << "2. Room type\n"
                     << "3. About hotel\n"
                     << "4. Exit\n";
                cin >> choice;

                switch (choice) {
                    case 1:
                        book.book_room();
                        break;
                    case 2:
                        room.room_type();
                        break;
                    case 3:
                        hotel.about();
                        break;
                    case 4:
                        cout << "Goodbye and have a great day!\n";
                        return; 
                        break;
                    default:
                        cout << "Menu tidak tersedia!\n";
                        break;
                }
            } 
        }
};