# mybank

MyBank is a simple banking application implemented in C. It provides basic banking functionalities such as creating an account, transferring money, depositing money, checking the account balance, and generating transaction receipts.

![blue modern business presentation (1)_page-0001](https://github.com/BrightDaniel/mybank/assets/107191784/55c3c0ce-15a6-457d-9cf7-b7f2dca0eadd)



## Prerequisites

To compile and run MyBank, ensure that you have the following:

- C compiler (e.g., GCC) installed on your system.

## Getting Started

Follow the steps below to get started with MyBank:

1. Clone the repository or download the source code:

```
git clone https://github.com/your-username/mybank.git
```

2. Compile the code using a C compiler:

```
gcc *.c -o mybank
```

3. Run the executable:

```
./mybank
```

## Usage

1. Upon running the program, you will be prompted to create an account by entering your first and last names.

2. Enter your password. The program will validate the password by asking you to re-enter it. You have three attempts to enter the correct password.

3. Once your password is validated, you will be welcomed to MyBank, and your initial account balance of 50,000 will be displayed.

4. The following options are available in the menu:

   - **a. Transfer Money**: Transfer a specified amount from your account to another recipient's account. Enter the recipient's account name, account number, bank name, and the transfer amount. If the transfer amount exceeds your account balance, an insufficient balance message will be displayed.

   - **b. Deposit Money**: Deposit a specified amount into your account. Enter the deposit amount. If the deposit amount is invalid (less than or equal to zero), an error message will be displayed.

   - **c. Check Balance**: Check the current balance of your account.

   - **d. Quit the Program**: Exit the program.

5. After each transaction, a transaction receipt will be generated and saved in a file named "receipt.txt". The receipt contains details such as the transaction type, account name, account number, bank name, transaction amount, previous balance, current balance, and the date and time of the transaction.

## Collaboration

Contributions to MyBank are welcome! If you would like to collaborate on this project, please follow these steps:

1. Fork the repository on GitHub.
2. Create a new branch with a descriptive name:
```
git checkout -b feature/my-new-feature
```
3. Make your modifications and write tests if necessary.
4. Commit your changes:
```
git commit -am 'Add some feature'
```
5. Push the branch to your forked repository:
```
git push origin feature/my-new-feature
```
6. Submit a pull request detailing the changes you made.

## Author

MyBank is developed and maintained by [Bwave ICT](https://github.com/brightdaniel).

## License

This project is licensed under the [MIT License](LICENSE).

## Acknowledgments

The implementation of MyBank was inspired by the need for a simple banking application to demonstrate basic programming concepts.

## Support

If you have any questions, suggestions, or encounter any issues while using MyBank, please feel free to [open an issue](https://github.com/your-username/mybank/issues). Your feedback is highly appreciated!
