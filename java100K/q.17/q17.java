import java.util.Scanner;

class Calc {
    int result;

    void add() {
        System.out.println("Sum is :- " + result);
    }

    void sub() {
        System.out.println("sub is :- " + result);
    }

    void mult() {
        System.out.println("mult is :- " + result);
    }

    void div() {
        System.out.println("div is :- " + result);
    }
}

public class q17 {
    public static void main(String[] args) {
       
    Scanner s = new Scanner(System.in);
    System.out.println("Enter \n1 for addition \n2 for subtraction \n3 for multiplication \n 4 for division");
    int cas = s.nextInt();

    System.out.println("Enter to numbers to see the result");
    int num1 = s.nextInt();
    int num2 = s.nextInt();

    Calc f = new Calc();


    switch (cas) {
            case 1:
            f.result = num1 + num2;
            f.add();
            break;

            case 2:
            f.result = num1 - num2;
            f.sub();
            break;

            case 3:
            f.result = num1 * num2;
            f.mult();
            break;

            case 4:
            f.result = num1 / num2;
            f.div();
            break;
    
        default:
            break;
    }

    }
}
