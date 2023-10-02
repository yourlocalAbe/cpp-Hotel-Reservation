#include <iostream>
#include <string>

using namespace std;

class About_Hotel{
    public:
        void about () {
            int balik;

            cout << "This hotel is located in Indonesia. Our priority is to make your night is a night to remember. We always test our Facility to provide our costumer the best facility they ever had. Our hotel maybe not have any name yet, but we surely going to make you remember our hotel even we don't have any name yet!\n"
                 << "We serve free food of your choice, you can eat in our food court or you can ask the kitchen staff to deliver the food to your room!\n"
                 << "We have our own pool located outside of the hotel and at the top of our hotel (11th floor)\n"
                 << "We have our own Gym located at the top floor (11th floor)\n"
                 << "We provide you free massage at the top floor (11th floor)\n"
                 << "Enjoy our Service and Facility!\n"
                 << "if you need any help, please call our staff with no hesitate\n"
                 << "Abe (Hotel staff) 082226512712\n"
                 << "Bea (Kitchen staff) 082226512722\n\n"
                 << "1.Home page\n"
                 << "2.Exit\n";
            cin >> balik;
                 if (balik == 1) {
                    return;
                 } else {
                    cout << "Goodbye!!\n";
                 }
        }
};
