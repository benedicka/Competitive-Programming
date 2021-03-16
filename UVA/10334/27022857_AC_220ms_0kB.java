import java.util.Scanner;
import java.math.BigInteger;

public class Main {

	public Main() {
		// TODO Auto-generated constructor stub
	}
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
        BigInteger[] fib = new BigInteger[1005];
        fib[0] = BigInteger.valueOf(1);
        fib[1] = BigInteger.valueOf(2);
        for (int i=2;i<=1000;i++)
        {
        	fib[i] = fib[i - 2].add(fib[i - 1]);
        }
        while (scan.hasNext()) {
            int n = scan.nextInt();
            System.out.println(fib[n]);
        }
    }
}
