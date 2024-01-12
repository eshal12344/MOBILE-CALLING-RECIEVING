#include <iostream>
#include <string>
#include <chrono>
#include <thread>
#include <ctime>

using namespace std;

void sendMessage(int& back) {
    system("cls");
    string send_message;
    cout << "\n\n\nEnter your message to send" << endl;
    cin.ignore();
    getline(cin, send_message);
    cout << "Sending plain text message......." << endl;
    this_thread::sleep_for(chrono::seconds(2));
    cout << "Sent!" << endl;
    cout << "Press 0 : Back" << endl;
    cin >> back;
    if (back == 0) {
        system("cls");
    }
}

void sendMessage(int& back, const string& messageType) {
    system("cls");
    string send_message;
    cout << "\n\n\nEnter your " << messageType << " message to send" << endl;
    cin.ignore();
    getline(cin, send_message);
    cout << "Sending " << messageType << " message......." << endl;
    this_thread::sleep_for(chrono::seconds(2));
    cout << "Sent!" << endl;
    cout << "Press 0 : Back" << endl;
    cin >> back;
    if (back == 0) {
        system("cls");
    }
}

void makeCall(int& back) {
    system("cls");
    cout << "\n\n\nMaking an audio call..........." << endl;
    this_thread::sleep_for(chrono::seconds(2));

    srand(time(0));
    int a = rand() % 2;
    if (a == 1) {
        cout << "Audio Call Rejected" << endl;
    }
    else {
        cout << "Audio Call Accepted" << endl;
    }

    cout << "Press 0 : Back" << endl;
    cin >> back;
    if (back == 0) {
        system("cls");
    }
}

void makeCall(int& back, const string& callType) {
    system("cls");
    cout << "\n\n\nMaking a " << callType << " call..........." << endl;
    this_thread::sleep_for(chrono::seconds(2));

    srand(time(0));
    int a = rand() % 2;
    if (a == 1) {
        cout << callType << " Call Rejected" << endl;
    }
    else {
        cout << callType << " Call Accepted" << endl;
    }

    cout << "Press 0 : Back" << endl;
    cin >> back;
    if (back == 0) {
        system("cls");
    }
}

int main() {
    int back;
    do {
        cout << "\n\n\t\t\t\tMobile" << endl;
        cout << "Press 1 : On" << endl;
        cout << "Press 2 : Off\n" << endl;
        int choice;
        cout << "Enter choice" << endl;
        cin >> choice;
        system("cls");

        if (choice == 1) {
            do {
                cout << "\n\nPress 1 : Send Plain Text Message" << endl;
                cout << "Press 2 : Send Audio Message" << endl;
                cout << "Press 3 : Send Multimedia Message" << endl;
                cout << "Press 4 : Make Audio Call" << endl;
                cout << "Press 5 : Make Video Call" << endl;
                cout << "Press 6 : Make Audio Conference Call" << endl;
                cout << "Press 7 : Make Video Conference Call" << endl;
                cout << "Press 0 : Back" << endl;
                cin >> choice;

                switch (choice) {
                case 1:
                    sendMessage(back);
                    break;
                case 2:
                    sendMessage(back, "Audio");
                    break;
                case 3:
                    sendMessage(back, "Multimedia");
                    break;
                case 4:
                    makeCall(back);
                    break;
                case 5:
                    makeCall(back, "Video");
                    break;
                case 6:
                    makeCall(back, "Audio Conference");
                    break;
                case 7:
                    makeCall(back, "Video Conference");
                    break;
                case 0:
                    system("cls");
                    break;
                default:
                    cout << "Invalid choice. Please try again." << endl;
                    break;
                }

            } while (choice != 0);
        }
        else {
            cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tMobile is off\n\n\n\n\n\n\n\n";
            break;
        }

    } while (1);

    return 0;
}