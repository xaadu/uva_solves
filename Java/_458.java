/* UVA --> 458 */

import java.util.Scanner;
import java.lang.StringBuilder;

public class _458 {
    public static void main(String args[]) {
        Scanner scan = new Scanner(System.in);
        while(scan.hasNext()) {
            String s = scan.nextLine();
            StringBuilder str = new StringBuilder(s);
            for (int i = 0; i < str.length(); i++) {
                str.setCharAt(i, (char) (str.charAt(i) - 7));
            }
            System.out.println(str);
        }
    }
}
