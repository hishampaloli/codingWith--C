import java.util.Scanner;

import javax.print.DocFlavor.STRING;

public class assigments {
   
  public static void main(String[] args) {

    Scanner s = new Scanner(System.in);
    System.out.println("Enter a number.");
    int num = s.nextInt();
    boolean flag = false;
    for (int i = 2; i <= num / 2; ++i) { 

      if (num % i == 0) {
        System.out.println(num + " is not a prime number.");
        break;
      }else {

        System.out.println(num + " is a prime number");
      }
    }
  }
}
