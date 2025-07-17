#include <stdio.h>


 //cus - name of the struct Customer to be used for refferencing in main
//cus[100] - denotes the memory and does not exceed limit unless expanded manually

//Important commands
/*create customers
display all customers
create products
display all products*/

// Structures
struct Customer {
    int cusId;
    char cusName[50];
    char cusPhone[11];
    char cusEmail[50];
} cus[100];

int cid = 0;

struct Product {
    int proId;
    char proName[50];
    int proQty;
    float proPrice;
} pro[100];

int pid = 0;

struct Billing {
    int billId;
    int cusId;
    int nopro;
    struct Items {
        int itmId;
        int itmQua;
    } itm[100];
} bill[100];

int bid = 0;

// Functions
void createCustomer() {
    cus[cid].cusId = cid + 1;
    printf("Enter your Name: ");
    scanf("%s", cus[cid].cusName);
    printf("Enter your Phone Number: ");
    scanf("%s", cus[cid].cusPhone);
    printf("Enter your Email: ");
    scanf("%s", cus[cid].cusEmail);
    printf("Customer Added!\n");
    cid++;
}

void displayCustomer() {
    if (cid == 0) {
        printf("No customers found.\n");
        return;
    }
    for (int i = 0; i < cid; i++) {
        printf("\nCustomer ID: %d\n", cus[i].cusId);
        printf("Name: %s\n", cus[i].cusName);
        printf("Phone: %s\n", cus[i].cusPhone);
        printf("Email: %s\n", cus[i].cusEmail);
    }
}

void createProduct() {
    pro[pid].proId = pid + 1;
    printf("Enter the Product Name: ");
    scanf("%s", pro[pid].proName);
    printf("Enter the Product Quantity: ");
    scanf("%d", &pro[pid].proQty);
    printf("Enter the Product Price: ");
    scanf("%f", &pro[pid].proPrice);
    printf("Product Added!\n");
    pid++;
}

void displayProduct() {
    if (pid == 0) {
        printf("No products found.\n");
        return;
    }
    for (int i = 0; i < pid; i++) {
        printf("\nProduct ID: %d\n", pro[i].proId);
        printf("Name: %s\n", pro[i].proName);
        printf("Quantity: %d\n", pro[i].proQty);
        printf("Price: ₹%.2f\n", pro[i].proPrice);
    }
}

void findCustomer() {
    int a;
    printf("Enter Customer ID: ");
    scanf("%d", &a);
    if (a <= 0 || a > cid) {
        printf("Invalid Customer ID!\n");
        return;
    }
    printf("\nCustomer Name: %s\n", cus[a - 1].cusName);
    printf("Phone Number: %s\n", cus[a - 1].cusPhone);
    printf("Email: %s\n", cus[a - 1].cusEmail);
}

void createBill() {
    bill[bid].billId = bid + 1;
    printf("Enter the Customer ID: ");
    scanf("%d", &bill[bid].cusId);
    if (bill[bid].cusId <= 0 || bill[bid].cusId > cid) {
        printf("Invalid Customer ID!\n");
        return;
    }

    printf("Enter the number of products: ");
    scanf("%d", &bill[bid].nopro);
    for (int i = 0; i < bill[bid].nopro; i++) {
        printf("Enter the Product ID: ");
        scanf("%d", &bill[bid].itm[i].itmId);
        if (bill[bid].itm[i].itmId <= 0 || bill[bid].itm[i].itmId > pid) {
            printf("Invalid Product ID! Skipping item.\n");
            continue;
        }
        printf("Enter the Product Quantity: ");
        scanf("%d", &bill[bid].itm[i].itmQua);
        
        pro[pid-1].proQty -= bill[bid].itm[i].itmQua;
        printf("%d\n", pro[pid-1].proQty);
    }
    printf("Bill Created!\n");
    bid++;
}

void customerBill() {
    int custId;
    printf("Enter Customer ID: ");
    scanf("%d", &custId);
    if (custId <= 0 || custId > cid) {
        printf("Invalid Customer ID!\n");
        return;
    }

    printf("\nCustomer Name: %s\n", cus[custId - 1].cusName);
    printf("Phone: %s\n", cus[custId - 1].cusPhone);
    printf("Email: %s\n", cus[custId - 1].cusEmail);

    int found = 0;
    for (int i = 0; i < bid; i++) {
        if (bill[i].cusId == custId) {
            found = 1;
            float total = 0;
            printf("\n----- Bill ID: %d -----\n", bill[i].billId);
            for (int j = 0; j < bill[i].nopro; j++) {
                int prd = bill[i].itm[j].itmId - 1;
                if (prd < 0 || prd >= pid) {
                    printf("Invalid Product ID in bill.\n");
                    continue;
                }
                float price = pro[prd].proPrice * bill[i].itm[j].itmQua;
                total += price;
                printf("Product: %s | Qty: %d | Unit Price: ₹%.2f | Subtotal: ₹%.2f\n",
                       pro[prd].proName,
                       bill[i].itm[j].itmQua,
                       pro[prd].proPrice,
                       price);
            }
            printf("Total Bill Amount: ₹%.2f\n", total);
        }
    }

    if (!found)
        printf("No bills found for this customer.\n");
}

int main() {
    while (1) {
        int n;
        printf("\n----- MENU -----\n");
        printf("1) Create Customer\n2) Display Customers\n3) Create Product\n4) Display Products\n5) Display Customer Details\n6) Create Bill\n7) Display Bill\n8) Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &n);
        switch (n) {
            case 1: {
                createCustomer();
                break;}
            case 2: {
                displayCustomer(); 
                break;}
            case 3: {createProduct(); break;}
            case 4: {displayProduct(); break;}
            case 5: {findCustomer(); break;}
            case 6: {createBill(); break;}
            case 7: {customerBill(); break;}
            case 8: printf("Exiting... Thank you!\n"); return 0;
            default: printf("Invalid option. Try again.\n");
        }
    }
}
