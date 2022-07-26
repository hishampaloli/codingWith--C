import java.util.Scanner;

// Your First Program
class Area {
  void square(float len) {
    float area = len * len;
    System.out.println("Area of square =:" + area);
  }

  void rectangle(float len, float breadth) {
    float area = len * len;
    System.out.println("Area of rectangle =:" + area);
  }

  void circle(float len) {
    float area = (float)((len * len) * Math.PI);
    System.out.println("Area of rectangle =:" + area);
  }

  void triangle(float len, float hight) {
    float area = (len * hight) / 2;
    System.out.println("Area of rectangle =:" + area);
  }

  }
  
  class MyClass extends Area {
    public static void main(String[] args) {

      Scanner sc = new Scanner(System.in);

      System.out.println("Enter\n 1 for squar\n2 for rectangle\n3 for circle\n4 for triangle");
      int cas = sc.nextInt();
      
      System.out.println("Enter length");
      float len = sc.nextInt();

      Area f = new Area();

      switch (cas) {
        case 1:
          f.square(len);
          break;

          case 2:
          System.out.println("Enter breadth");
          float breadth = sc.nextInt();
            f.rectangle(len, breadth);
            break;

            case 3:
          f.circle(len);
          break;

          case 4:
          System.out.println("Enter hight");
          float hight = sc.nextInt();
          f.triangle(len, hight);
          break;
      
        default:
          break;
      }
  
    }
  }