import java.util.*;
import java.lang.*;
import java.io.*;

public class Siam
{
	
	public static Scanner scanner = new Scanner(System.in);
	public static PrintWriter printer = new PrintWriter(System.out, true);
	
	public static int n;
	
	public static void input(){
		n = scanner.nextInt();
	}
	
	public static void solve(){
		double ans = 0;
		for(int i = 1; i <= n; i++){
			ans += (1.00 / i);
		}
		printer.printf("%.9f\n", ans);
	}
	
	public static void main (String[] args) throws java.lang.Exception
	{
		input();
		solve();
	}
}
