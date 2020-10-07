package codechef;

import java.io.IOException;
import java.util.Scanner;

public class StonesSolution {

	public static void main(String[] args) throws IOException {
		Scanner s = new Scanner(System.in);
		int n = s.nextInt();
		while (n-- > 0) {
			int a, b, c, result = 0;
			a = s.nextInt();
			b = s.nextInt();
			c = s.nextInt();
			int MIN = Math.min(b, c / 2);
			if (MIN > 0) {
				result += MIN * 3;
				b -= MIN;
			}
			MIN = Math.min(a, b / 2);
			if (MIN > 0) {
				result += (3 * MIN);
			}
			System.out.println(result);
		}
		s.close();
	}

}