package Basics;

public class Basics{
    public static void main(String[] args) {
        System.out.println("Hello World");

        // Variable declaration and initialization
        int age = 25;
        String name = "Alice";
        System.out.println("Name: " + name + ", Age: " + age);

        System.out.println("-----------------------------");

        // Data types
        System.out.println("--- Data Types ---");
        int number = 10;
        double pi = 3.14;
        boolean isJavaFun = true;
        float temperature = 36.6f;
        char grade = 'A';
        String greeting = "Welcome to Java!";
        long population = 7800000000L;
        short shortNumber = 1000;
        byte byteNumber = 100;

        System.out.println("Number: " + number);
        System.out.println("Pi: " + pi);
        System.out.println("Is Java fun? " + isJavaFun);
        System.out.println("Temperature: " + temperature);
        System.out.println("Grade: " + grade);
        System.out.println("Greeting: " + greeting);
        System.out.println("Population: " + population);
        System.out.println("Short number: " + shortNumber);
        System.out.println("Byte number: " + byteNumber);

        System.out.println("-----------------------------");

        // Operators
        System.out.println("--- Operators ---");
        System.out.println("Arithmetic Operators:");
        // Arithmetic operators
        int a = 10;
        int b = 5;
        System.out.println("a + b = " + (a + b));
        System.out.println("a - b = " + (a - b));
        System.out.println("a * b = " + (a * b));
        System.out.println("a / b = " + (a / b));
        System.out.println("a % b = " + (a % b));

        // Relational operators
        System.out.println("Relational Operators:");
        System.out.println("a == b: " + (a == b));
        System.out.println("a != b: " + (a != b));
        System.out.println("a > b: " + (a > b));
        System.out.println("a < b: " + (a < b));
        System.out.println("a >= b: " + (a >= b));
        System.out.println("a <= b: " + (a <= b));

        // Logical operators
        System.out.println("Logical Operators:");
        boolean x = true;
        boolean y = false;
        System.out.println("x && y: " + (x && y));
        System.out.println("x || y: " + (x || y));
        System.out.println("!x: " + (!x));

        // Assignment operators
        System.out.println("Assignment Operators:");
        int c = 10;
        c += 5; // c = c + 5
        System.out.println("c after += 5: " + c);
        c -= 3; // c = c - 3
        System.out.println("c after -= 3: " + c);
        c *= 2; // c = c * 2
        System.out.println("c after *= 2: " + c);
        c /= 4; // c = c / 4
        System.out.println("c after /= 4: " + c);
        c %= 3; // c = c % 3
        System.out.println("c after %= 3: " + c);

        // Increment and decrement operators
        System.out.println("Increment and Decrement Operators:");
        int d = 5;
        System.out.println("d: " + d);
        System.out.println("d++: " + (d++)); // Post-increment
        System.out.println("d after post-increment: " + d);
        System.out.println("++d: " + (++d)); // Pre-increment
        System.out.println("d after pre-increment: " + d);

        System.out.println("-----------------------------");

        // Type casting
        System.out.println("--- Type Casting ---");
        int e = 100;
        double f = e; // Implicit casting (int to double)
        System.out.println("e (int): " + e);
        System.out.println("f (double): " + f); 
        double g = 3.14;
        int h = (int) g; // Explicit casting (double to int)
        System.out.println("g (double): " + g);
        System.out.println("h (int): " + h);

        System.out.println("-----------------------------");

        // ASCII values
        System.out.println("--- ASCII Values ---");
        char letter = 'A';
        int asciiValue = letter; // Implicit casting (char to int)
        System.out.println("Letter: " + letter);
        System.out.println("ASCII value of " + letter + ": " + asciiValue);
        
        int asciiInt = 32;
        char asciiChar = (char) asciiInt; // Explicit casting (int to char)
        System.out.println("ASCII value: " + asciiInt);
        System.out.println("Character for ASCII value " + asciiInt + ": " + asciiChar);
    }
}