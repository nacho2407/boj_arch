import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.List;
import java.util.StringTokenizer;

public class Problem10814 {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());
        List<User> user = new ArrayList<User>();

        for(int i = 0; i < n; i++) {
            StringTokenizer st = new StringTokenizer(br.readLine());

            user.add(new User(Integer.parseInt(st.nextToken()), st.nextToken()));
        }

        br.close();

        Collections.sort(user, new Comparator<User>() {
            public int compare(User i, User j) {
                return i.age - j.age;
            }
        });

        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        bw.write(user.get(0).toString());

        for(int i = 1; i < n; i++) {
            bw.write("\n" + user.get(i).toString());
        }

        bw.close();
    }

    static void swap(User[] user, int i, int j) {
        User temp;

        temp = user[i];
        user[i] = user[j];
        user[j] = temp;
    }
}

class User {
    int age;
    String name;

    User(int age, String name) {
        this.age = age;
        this.name = name;
    }

    public String toString() {
        return age + " " + name;
    }
}
