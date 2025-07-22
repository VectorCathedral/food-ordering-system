# 🍲 M'Zakes Homestyle Kitchen Ordering System

Welcome to the **M'Zakes Homestyle Kitchen** — a simple yet functional C++ console application that allows customers to place food orders from a menu, calculates their total bill, and applies a discount for large orders.

---

## 🌟 Features

✅ Load menu items from a text file  
✅ Display a neatly numbered list of meals and prices  
✅ Accept multiple food orders per customer  
✅ Calculate order totals based on quantity  
✅ Automatically apply a 10% discount if the bill exceeds R400  
✅ Print out the final bill to the console  

---

## 📁 File Structure

├── main.cpp # Main C++ source file

├── foodmenu.txt # Text file containing food menu items and prices


---

## 🧾 Sample `foodmenu.txt` Format

Ensure this file exists before running the program. It should contain each menu item and price on a new line, separated by a comma:

Beef Stew,80

Pap and Wors,60

Chicken Wings,100

Vegetable Curry,75

Grilled Fish,90



---

## ⚙️ Configuration Instructions

Before you compile or run the application, make sure to configure the correct file path in `main.cpp`.

1. Locate this line in the code:
```cpp
std::string file_path = "C:\\Users\\users\\source\\repos\\FTOS\\foodmenu.txt";
Replace it with the actual path to foodmenu.txt on your computer.
⚠️ Make sure to use double backslashes (\\) if you're on Windows. For example:
std::string file_path = "D:\\Projects\\FTOS\\foodmenu.txt";

```
## 👨‍🍳 How It Works
Customer enters their name.

Menu items are displayed with line numbers.

Customer selects line numbers and quantities to place an order.

Customer can place as many items as desired.

When done, the program calculates:

Subtotal

Discount (if applicable)

Final total

A thank-you message is displayed with the customer's name

```cpp
------Final Bill------
Subtotal: 450
Discount: 45
Final Total: 405
Thank you, Please come again, and have a lovely day, Sarah!
```
