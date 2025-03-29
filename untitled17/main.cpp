#include <iostream>
using namespace std;

//Define your class here

class Door {
public:
    Door() {
        isOpen = false;
        isLocked = true;
    }
    void OpenDoor() {
        if (isOpen == false && isLocked == false) {
            isOpen = true;
        }
        else if (isOpen == true) {
            cout << "The door is already open." << endl;
        }
        else if (isOpen == false && isLocked == true) {
            cout << "Sorry, the door is locked." << endl;
        }
    }
    void CloseDoor() {
        if (isOpen == true) {
            isOpen = false;
        }
        else if (isOpen == false) {
            cout << "The door is already shut." << endl;
        }
    }
    void LockDoor() {
        if (isOpen == false && isLocked == false) {
            isLocked = true;
        }
        else if (isOpen == true) {
            cout << "Sorry, the door is open." << endl;
        }
        else if (isOpen == false && isLocked == true) {
            cout << "The door is already locked." << endl;
        }
    }
    void UnlockDoor() {
        if (isOpen == false && isLocked == true) {
            isLocked = false;
        } else if (isOpen == true) {
            cout << "Sorry, the door is open." << endl;
        } else if (isOpen == false && isLocked == false) {
            cout << "The door is already unlocked." << endl;
        }
    }

        private:
        bool isOpen;
        bool isLocked;
    };




//Do not edit below this line-----------------------------------------------------------------

    int main() {
        Door pantryDoor;
        Door frontDoor;


        frontDoor.LockDoor();
        frontDoor.UnlockDoor();
        frontDoor.UnlockDoor();
        frontDoor.OpenDoor();
        frontDoor.LockDoor();
        frontDoor.UnlockDoor();
        frontDoor.CloseDoor();
        frontDoor.LockDoor();
        frontDoor.LockDoor();
        pantryDoor.OpenDoor();
        pantryDoor.UnlockDoor();
        pantryDoor.OpenDoor();
        pantryDoor.OpenDoor();
        frontDoor.CloseDoor();
        pantryDoor.CloseDoor();
        pantryDoor.CloseDoor();
        pantryDoor.LockDoor();
        pantryDoor.OpenDoor();

        return 0;
    }
