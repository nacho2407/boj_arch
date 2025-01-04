import java.io.InputStreamReader;
import java.io.BufferedReader;
import java.util.StringTokenizer;
import java.io.OutputStreamWriter;
import java.io.BufferedWriter;

public class Problem2566 {
    public static void main(String[] args) throws Exception {
        Tree tree = new Tree(new Node(0, 0, 0));
        Node max;
        OutputStreamWriter osw = new OutputStreamWriter(System.out);
        BufferedWriter bw = new BufferedWriter(osw);

        makeTree(tree);

        max = tree.getMax();

        bw.write(max.getVal() + "");
        bw.newLine();
        bw.write(max.getY() + " " + max.getX());

        bw.flush();

        osw.close();
    }

    public static void makeTree(Tree t) throws Exception {
        InputStreamReader isr = new InputStreamReader(System.in);
        BufferedReader br = new BufferedReader(isr);
        StringTokenizer st;

        for(int i = 1; i <= 9; i++) {
            st = new StringTokenizer(br.readLine());
            
            for(int j = 1; j <= 9; j++) {
                t.add(new Node(j, i, Integer.parseInt(st.nextToken())));
            }
        }

        isr.close();
    }
}

class Tree {
    private Node head;

    public Tree(Node head) {
        this.head = head;
    }

    public void add(Node n) {
        add(n, head);
    }

    private void add(Node n, Node head) {
        if(n.getVal() < head.getVal()) {
            if(head.getLeft() == null) {
                head.setLeft(n);
            }
            else {
                add(n, head.getLeft());
            }
        }
        else if(n.getVal() == head.getVal()) {
            head.setX(n.getX());
            head.setY(n.getY());
        }
        else {
            if(head.getRight() == null) {
                head.setRight(n);
            }
            else {
                add(n, head.getRight());
            }
        }
    }

    public Node getMax() {
        Node n = head;
        
        for(; n.getRight() != null; ) {
            n = n.getRight();
        }

        return n;
    }
}

class Node {
    private int x, y, val;
    private Node left, right;

    public Node(int x, int y, int val) {
        this.x = x;
        this.y = y;
        this.val = val;
    }

    public int getX() {
        return x;
    }

    public void setX(int x) {
        this.x  = x;
    }

    public int getY() {
        return y;
    }

    public void setY(int y) {
        this.y  = y;
    }

    public int getVal() {
        return val;
    }

    public Node getLeft() {
        return left;
    }

    public void setLeft(Node left) {
        this.left = left;
    }

    public Node getRight() {
        return right;
    }

    public void setRight(Node right) {
        this.right = right;
    }
}
