package javaThis;

 class This {
    public static void main(String[] args) {
        int number = 10;

        ToThis t = new ToThis(number,120);
    }
}

class ToThis {
    int a = 0, b= 0, sum;

    ToThis(int a, int b) {
        this.a = a;
        this.b = b;
        System.out.println(this.b);
    }

}
