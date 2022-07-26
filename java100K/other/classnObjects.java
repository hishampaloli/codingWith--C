import java.util.Scanner;

// Your First Program
class sum {
    int a, b, c;

    void calcSum(){
        c = a + b;
        display(c);
    }

    void display(int c) {
        System.out.println("sum :- " + c);
    }
  }
  
  class Main {
    public static void main(String[] args) {
  
      sum led = new sum();
      sum led2 = new sum();
  
      led.a = 1;
      led.b = 3;

      led2.a = 9;
      led2.b = 1;

      led.calcSum();
      led2.calcSum();
    }
  }