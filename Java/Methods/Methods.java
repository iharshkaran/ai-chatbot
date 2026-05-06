package Methods;

public class Methods {
    public static void main(String[] args) {
        // Calling the method
        greet();
        int sum = add(5, 10);
        System.out.println("Sum: " + sum);
    }

    // Method without parameters and return type
    public static void greet() {
        System.out.println("Hello! Welcome to Java Methods.Methods.");
    }

    // Method with parameters and return type
    public static int add(int a, int b) {
        return a + b;
    }
}
