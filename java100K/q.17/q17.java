import java.util.Scanner;

// class Calc {
//     int result;

//     void add() {
//         System.out.println("Sum is :- " + result);
//     }

//     void sub() {
//         System.out.println("sub is :- " + result);
//     }

//     void mult() {
//         System.out.println("mult is :- " + result);
//     }

//     void div() {
//         System.out.println("div is :- " + result);
//     }
// }

public class q17 {
    public static void main(String[] args) {
       
        int i,j,n=5,k=1,l=0,m=0,p=2;
		
		for(i=1;i<=n;i++) {
			for(j=1;j<=i;j++) {
				System.out.print(j+ " ");
			}
			
			for(j=i;j<=n;j++) {
				System.out.print("  ");
			}
			for(j=i;j<=n;j++) {
				System.out.print(j+" ");
			}
			for(j=1;j<=i;j++) {
				System.out.print("  ");
			}
			
			for(j=1;j<=i;j++) {
				if(j==1) {
					System.out.print(j+" ");
				}else if(i==j||i==n) {
					System.out.print(j+" ");
				}
				else {
					System.out.print("  ");
				}
			}
			
			System.out.println();
		}
		System.out.println();
		
		for(i=1;i<=n;i++) {
			for(j=i;j<=n;j++) {
				System.out.print("  ");
			}
			for(j=1;j<=i;j++) {
				System.out.print(k++ +" ");
				}
			k=k-l;
			l++;
		
			for(j=1;j<i;j++) {
				System.out.print(m-- +" ");
			}
			m=m+p;
			p++;
			
			
				for(j=i;j<=n;j++) {
					System.out.print("  ");
				}
				for(j=i;j<=n;j++) {
					System.out.print("  ");
				}
			
			for(j=1;j<=i;j++) {
				if(j==1) {
					System.out.print(j+"   ");
				}else if(i==j||i==n) {
					System.out.print(j+"   ");
				}
				else {
					System.out.print("    ");
				}
			}
			
			
			System.out.println();
		}
		System.out.println();
		for(i=1;i<=n;i++) {
			int z=1;
			for(j=i;j<=n;j++) {
				if(i==1) {
					System.out.print(z++ +" ");
				}else if(j==n) {
					System.out.print(n+" ");
				}else if(j==i) {
					System.out.print(i+" ");
				}
				else {
					System.out.print("  ");
				}
			}
			System.out.println();
		}
}
