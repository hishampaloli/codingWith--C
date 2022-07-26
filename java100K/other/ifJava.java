import java.util.Scanner;

class ifJava {
    public static void main(String a[]) {
        System.out.println("Enter a number");
        Scanner sc = new Scanner(System.in);

        int num = sc.nextInt();

        if (num < 0) {
            System.out.println("Negetive");
        }else {
            System.out.println("Postiive");
        }
    }
}
