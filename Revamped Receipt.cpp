#include <stdio.h>
#include <windows.h>

class showAisles {
public:
    void aisle1() {
            system("cls");
            printf("You are inside 'Aisle1'.\n");
            printf("Items inside this aisle are:\n");
            printf("(1) Product1\n");
            printf("(2) Product2\n");
            printf("(3) Product3\n");
            printf("(4) Product4\n");
            printf("(5) Product5\n");
    };
    void aisle2() {system("cls");
            printf("You are inside 'Aisle2'.\n");
            printf("Items inside this aisle are:\n");
            printf("(1) Product1\n");
            printf("(2) Product2\n");
            printf("(3) Product3\n");
            printf("(4) Product4\n");
            printf("(5) Product5\n");
    };
    void aisle3() {system("cls");
            printf("You are inside 'Aisle3'.\n");
            printf("Items inside this aisle are:\n");
            printf("(1) Product1\n");
            printf("(2) Product2\n");
            printf("(3) Product3\n");
            printf("(4) Product4\n");
            printf("(5) Product5\n");
    };
    void aisle4() {system("cls");
            printf("You are inside 'Aisle4'.\n");
            printf("Items inside this aisle are:\n");
            printf("(1) Product1\n");
            printf("(2) Product2\n");
            printf("(3) Product3\n");
            printf("(4) Product4\n");
            printf("(5) Product5\n");
    };
    void aisle5() {system("cls");
            printf("You are inside 'Aisle5'.\n");
            printf("Items inside this aisle are:\n");
            printf("(1) Product1\n");
            printf("(2) Product2\n");
            printf("(3) Product3\n");
            printf("(4) Product4\n");
            printf("(5) Product5\n");
    };
};

class aisleFunc {
public:
    void aisle1Func() {
        int choice;
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                system("cls");
                printf("Item has been added to cart.\n");
                break;
            case 2:
                system("cls");
                printf("Item has been added to cart.\n");
                break;
            case 3:
                system("cls");
                printf("Item has been added to cart.\n");
                break;
            case 4:
                system("cls");
                printf("Item has been added to cart.\n");
                break;
            case 5:
                system("cls");
                printf("Item has been added to cart.\n");
                break;
        };
        //checkout logic
    };
    void aisle2Func() {
        int choice;
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                system("cls");
                printf("Item has been added to cart.\n");
                break;
            case 2:
                system("cls");
                printf("Item has been added to cart.\n");
                break;
            case 3:
                system("cls");
                printf("Item has been added to cart.\n");
                break;
            case 4:
                system("cls");
                printf("Item has been added to cart.\n");
                break;
            case 5:
                system("cls");
                printf("Item has been added to cart.\n");
                break;
        };
        //checkout logic
    };
    void aisle3Func() {
        int choice;
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                system("cls");
                printf("Item has been added to cart.\n");
                break;
            case 2:
                system("cls");
                printf("Item has been added to cart.\n");
                break;
            case 3:
                system("cls");
                printf("Item has been added to cart.\n");
                break;
            case 4:
                system("cls");
                printf("Item has been added to cart.\n");
                break;
            case 5:
                system("cls");
                printf("Item has been added to cart.\n");
                break;
        };
        //checkout logic
    };
    void aisle4Func() {
        int choice;
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                system("cls");
                printf("Item has been added to cart.\n");
                break;
            case 2:
                system("cls");
                printf("Item has been added to cart.\n");
                break;
            case 3:
                system("cls");
                printf("Item has been added to cart.\n");
                break;
            case 4:
                system("cls");
                printf("Item has been added to cart.\n");
                break;
            case 5:
                system("cls");
                printf("Item has been added to cart.\n");
                break;
        };
        //checkout logic
    };
    void aisle5Func() {
        int choice;
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                system("cls");
                printf("Item has been added to cart.\n");
                break;
            case 2:
                system("cls");
                printf("Item has been added to cart.\n");
                break;
            case 3:
                system("cls");
                printf("Item has been added to cart.\n");
                break;
            case 4:
                system("cls");
                printf("Item has been added to cart.\n");
                break;
            case 5:
                system("cls");
                printf("Item has been added to cart.\n");
                break;
        };
        //checkout logic
    };
};

class showMenuFunc {
    public:
    void menuFunc() {
        int menuchoice;
        scanf("%d", &menuchoice);
        switch (menuchoice) {
            case 1:
                system("cls");
                showAisles{}.aisle1();
                aisleFunc{}.aisle1Func();
                break;
            case 2:
                system("cls");
                showAisles{}.aisle2();
                aisleFunc{}.aisle2Func();
                break;
            case 3:
                system("cls");
                showAisles{}.aisle3();
                aisleFunc{}.aisle3Func();
                break;
            case 4:
                system("cls");
                showAisles{}.aisle4();
                aisleFunc{}.aisle4Func();
                break;
            case 5:
                system("cls");
                showAisles{}.aisle5();
                aisleFunc{}.aisle5Func();
                break;
        }
    };
};

class showMenue {
    public:
        void showMenu() {
            system("cls");
            printf("Where would you like to go?\n");
            printf("(1) Aisle1\n");
            printf("(2) Aisle2\n");
            printf("(3) Aisle3\n");
            printf("(4) Aisle4\n");
            printf("(5) Aisle5\n");
            showMenuFunc{}.menuFunc();
        };
};



int main() {

    system("cls");
    printf("Welcome To Shop.");
  //classname{}.voidfunction();    // this is how to call a void function inside a class
    showMenue{}.showMenu();
};
