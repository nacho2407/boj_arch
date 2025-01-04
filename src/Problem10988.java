import java.io.InputStreamReader;
import java.io.BufferedReader;
import java.io.OutputStreamWriter;
import java.io.BufferedWriter;

public class Problem10988 {
    public static void main(String[] args) throws Exception {
        InputStreamReader isr = new InputStreamReader(System.in);
        BufferedReader br = new BufferedReader(isr);
        String s = br.readLine();
        int length = s.length();
        MyStack ms = new MyStack(length);
        int res = 1;
        OutputStreamWriter osw = new OutputStreamWriter(System.out);
        BufferedWriter bw = new BufferedWriter(osw);

        br.close();
        isr.close();

        for(int i = 0; i < length; i++) {
            ms.push(s.charAt(i));
        }

        for(int i = 0; i < length; i++) {
            if(s.charAt(i) != ms.pop()) {
                res = 0;
                break;
            }
        }

        bw.write(res + "");

        bw.flush();

        bw.close();
        osw.close();
    }
}

class MyStack {
    private char[] items;
    private int size = 0;

    public MyStack(int capacity) {
        items = new char[capacity];
    }

    public void push(char c) {
        items[size++] = c;
    }

    public char pop() {
        return items[--size];
    }
}
