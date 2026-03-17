# Bank Queue Management System (C++)

## Description
This is a simple **Bank Queue Management System** implemented in **C++** using a **linked list based Queue**.  
It simulates a real-life bank queue where customers are served in **FIFO (First-In-First-Out)** order.

The system allows you to:
- Add new customers to the queue  
- Serve (dequeue) customers from the front  
- Display the current queue of customers  

---

## Features

1. **Enqueue Customer**: Add a new customer to the rear of the queue.  
2. **Dequeue Customer**: Serve the customer at the front of the queue.  
3. **Display Queue**: View the current list of customers in the queue.  
4. **Exit**: Quit the program.

---

## How to Run & Example Usage

1. Clone the repository or download the `main.cpp` file.
2. Compile the code using g++ or any C++ compiler:
   ```bash
   g++ main.cpp -o BankQueue
   ```
3. Run the executable:
   ```bash
   ./BankQueue   # Linux / Mac
   BankQueue.exe # Windows
   ```

4. Sample Interaction:

```
Enter------
'1' To add new customer to the queue
'2' to dequeue customers
'3' to display the queue of the customer
'4' to exit the operation

Choice: 1
Enter the customer name: Ashish
Customers are added successfully

Choice: 1
Enter the customer name: Raj
Customers are added successfully

Choice: 3
Current Queue: Ashish <---> Raj <---> 

Choice: 2
Dequeue Successfully

Choice: 3
Current Queue: Raj <---> 
```

---

## Data Structure Used
- **Queue** implemented using **Linked List**  
- Node structure stores `customer_name` and pointer to next customer

---

## Learning Outcomes
- Implementing **Queue** with linked list in C++  
- Understanding **FIFO (First-In-First-Out)** principle  
- Working with **dynamic memory allocation** (`new` and `delete`)  
- Handling **user input** and menu-driven programs  

---

## Author
**Ashish Modak**
