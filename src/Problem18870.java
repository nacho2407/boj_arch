import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.Arrays;
import java.util.Comparator;
import java.util.StringTokenizer;

public class Problem18870 {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        Node values[] = new Node[Integer.parseInt(br.readLine())];
        Node sorted[] = new Node[values.length];
        StringTokenizer st = new StringTokenizer(br.readLine());

        br.close();

        for(int i = 0; i < values.length; i++) {
            Node newNode = new Node(Integer.parseInt(st.nextToken()));

            values[i]  = newNode;
            sorted[i] = newNode;
        }

        Arrays.sort(sorted, new Comparator<Node>() {
            public int compare(Node n, Node m) {
                return n.value - m.value;
            }
        });

        int nextRank = 0;

        sorted[0].rank = nextRank;

        for(int i = 1; i < sorted.length; i++) {
            if(sorted[i-1].value != sorted[i].value) {
                nextRank++;
            }
            
            sorted[i].rank = nextRank;
        }

        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        bw.write(values[0].rank + "");

        for(int i = 1; i < values.length; i++) {
            bw.write(" " + values[i].rank);
        }

        bw.close();
    }
}

class Node {
    int value;
    int rank;

    public Node(int newValue) {
        value = newValue;
    }
}
