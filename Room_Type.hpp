#include <iostream>
#include <string>

using namespace std;

class Room {
    public:
        void room_type () {
            int room_type_choice;

            cout << "which room type that you wanna know about?\n"
                 << "1. Gold\n"
                 << "2. Silver\n"
                 << "3. bronze\n"
                 << "4. Home Page\n"
                 << "5. Exit\n";
            cin >> room_type_choice;

            if (room_type_choice == 1) {
                cout << "Gold room located in 6th-9th floor."
                     << "Gold room Facility : \n"
                     << "1. Nectar Premier Copper (Bed)\n"
                     << "2. Whirlpool (Air Conditioner)\n"
                     << "3. LG C2 OLED TV (Television)\n"
                     << "4. Blueair Blue Pure 311i (Air Purifier)\n"
                     << "5. Bathroom with Bath tub, Shower, Soap, Shampoo, Toothbrush, Toothpaste, vent, and built in bluetooth speaker\n"
                     << "6. Restroom"
                     << "7. Table\n"
                     << "8. Sofa\n"
                     << "9. Room card"
                     << "10. price : 10.000$\n";
            } else if (room_type_choice == 2) {
                cout << "Silver room located in 4th-6th floor."
                     << "Silver room Facility : \n"
                     << "1. Nectar Premier Copper (Bed)\n"
                     << "2. Whirlpool (Air Conditioner)\n"
                     << "3. LG C2 OLED TV (Television)\n"
                     << "4. Blueair Blue Pure 311i (Air Purifier)\n"
                     << "5. Bathroom with Bath tub, Shower, Soap, Shampoo, Toothbrush, Toothpaste, vent, and closet\n"
                     << "6. Table\n"
                     << "7. Room card"
                     << "8. price : 7.999$\n";
            } else if (room_type_choice == 3) {
                cout << "Bronze room located in 1st-3th floor."
                     << "Bronze room Facility : \n"
                     << "1. Nectar Premier Copper (Bed)\n"
                     << "2. Whirlpool (Air Conditioner)\n"
                     << "3. LG C2 OLED TV (Television)\n"
                     << "4. Bathroom with Shower, Soap, Shampoo, Toothbrush, Toothpaste, vent, and closet\n"
                     << "5. Table\n"
                     << "6. Room card"
                     << "7. price : 5.999$\n";
            } else if (room_type_choice == 4) {
                return;
            } else {
                cout << "Goodbye!\n";
            } 
            
        }
};