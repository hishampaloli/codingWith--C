import java.util.Scanner;

// Your First Program
class First {
  int a;
  void display() {
    
    System.out.println("A ;- " + a);
    Final f = new Final();
    f.b = a;

    f.add();
    
  }
  }

  class Final {
    int b;

    void add() {
      System.out.println("b ;- " + b);
    }
  }
  
  class Aain {
    public static void main(String[] args) {

    First f = new First();
    int number = 786;
    f.a = number;

    f.display();
    }
  }