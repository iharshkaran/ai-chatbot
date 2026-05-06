package Loops;

public class Loops {
    public static void main(String[] args) {
        // for loop
        System.out.println("--- for loop ---");
        for (int i = 1; i <= 5; i++) {
            System.out.println("Iteration: " + i);
        }

        // while loop
        System.out.println("-----------------------------");
        System.out.println("--- while loop ---");
        int j = 1;
        while (j <= 5) {
            System.out.println("Iteration: " + j);
            j++;
        }

        // do-while loop
        System.out.println("-----------------------------");
        System.out.println("--- do-while loop ---");
        int k = 1;
        do {
            System.out.println("Iteration: " + k);
            k++;
        } while (k <= 5);
    }
}
