import java.util.Scanner;
import java.util.Stack;

public class Main {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		
		while(t-- > 0) {
			Stack<Character> stack = new Stack<>();
			boolean flag = true;
			String input = sc.next();
			for(int i =0; i<input.length(); i++) {
				if(input.charAt(i) == '(') {
					stack.push('(');
				} else {
					if(stack.isEmpty()) {
						flag = false;
						break;
					}
					stack.pop();
				}
			}
			if(flag == true && stack.size()==0)
				System.out.println("YES");
			else
				System.out.println("NO");	
		}
	}
}
