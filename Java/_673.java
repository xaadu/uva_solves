/* UVA --> 673 */

import java.util.Scanner;

class Stack {
    int stck[] = new int [150];
    int tos;
    Stack(){
        tos = 0;
    }
    void push(int item) {
        stck[tos++] = item;
    }
    int pop(){
        if(--tos < 0) return 0;
        else return stck[tos];
    }
}
public class _673 {
    public static void main(String args[]) {
        Scanner scan = new Scanner(System.in);
        boolean check;
        String s1;
        Stack stck = new Stack();
        int t = scan.nextInt();
        int j=0;
        while(t-->0) {
            check = true;
            if(j==0){scan.nextLine();j++;}
            s1 = scan.nextLine();
            for (int i = 0; i < s1.length(); i++)
                if (s1.charAt(i) == '(')
                    stck.push(s1.charAt(i));
                else if (s1.charAt(i) == '[')
                    stck.push(s1.charAt(i));
                else if (s1.charAt(i) == ')')
                    if (stck.pop() == '(') ;
                    else {
                        check = false;
                        break;
                    }
                else if (s1.charAt(i) == ']')
                    if (stck.pop() == '[') ;
                    else {
                        check = false;
                        break;
                    }
            if (check && stck.tos==0) System.out.println("Yes");
            else System.out.println("No");
            stck.tos=0;
        }
    }
}
