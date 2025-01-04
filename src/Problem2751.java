import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;

public class Problem2751 {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int items[] = new int[Integer.parseInt(br.readLine())];

        for(int i = 0; i < items.length; i++) {
            items[i] = Integer.parseInt(br.readLine());
        }

        br.close();

        mergeSort(items, 0, items.length);

        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        bw.write(items[0] + "");

        for(int i = 1; i < items.length; i++) {
            bw.write("\n" + items[i]);
        }

        bw.close();
    }

    static void mergeSort(int items[], int begin, int end) {
        if(end < begin + 1000) {
            insertionSort(items, begin, end);
        }
        else {
            mergeSort(items, begin, (begin + end) / 2);
            mergeSort(items, (begin + end) / 2, end);
            merge(items, begin, (begin + end) / 2, end);
        }
    }

    static void merge(int items[], int i, int j, int k) {
        int temp[] = new int[k - i];
        int index = 0;

        int firstIndex = i;
        int secondIndex = j;

        for(; firstIndex < j && secondIndex < k; ) {
            if(items[firstIndex] <= items[secondIndex]) {
                temp[index] = items[firstIndex];
                firstIndex++;
            }
            else if(items[secondIndex] < items[firstIndex]) {
                temp[index] = items[secondIndex];
                secondIndex++;
            }

            index++;
        }

        if(firstIndex == j) {
            for(; secondIndex < k; ) {
                temp[index] = items[secondIndex];
                secondIndex++;
                index++;
            }
        }
        else {
            for(; firstIndex < j; ) {
                temp[index] = items[firstIndex];
                firstIndex++;
                index++;
            }
        }

        for(int l = 0; l < temp.length; l++) {
            items[l + i] = temp[l];
        }
    }

    static void insertionSort(int items[], int begin, int end) {
        for(int i = begin + 1; i < end; i++) {
            for(int j = i; j > begin && items[j] < items[j - 1]; j--) {
                swap(items, j - 1, j);
            }
        }
    }

    static void swap(int arr[], int i, int j) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}
