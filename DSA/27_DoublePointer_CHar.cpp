    #include <iostream>
    using namespace std;

    void print(int *p) {
        p = p + 1;
        cout << "inside print(): " << p << endl;
    }

    void update(int *p) {
        *p = *p + 1;
        cout << "inside update(): " << *p << endl;
    }

    int getSum(int *arr, int n){
        int sum = 0;
        for(int i = 0 ; i<n; i++){
            sum += i[arr];  // arr[i] = *(arr+i) === i[arr] = *(i+arr)
        }
        return sum;
    }

    int main() {
        int arr[5] = {1, 2, 3, 45, 5};
        char ch[6] = "abcde";

        cout << "Arr: ";
        for (int i = 0; i < 5; ++i) {
            cout << arr[i] << " ";
        }
        cout << endl;

        cout << "Ch: " << ch << endl;

        int *p = arr; // Pointer to the first element of arr
        char *q = ch; // Pointer to the first element of ch

        cout << "p: " << (void*)p << endl;
        cout << "q: " << (void*)q << endl;

        char c1[6] = "abcde"; // OK
        // char *c1 = "abhed"; // Risky: String literals are stored in read-only memory

        char c2 = 'z';
        char *ch1 = &c2;
        cout << *ch1 << endl; // Outputs 'z'

        int t = 5;
        int *ptr = &t; // Pointer to t

        cout << "Before print(): " << ptr << endl;
        print(ptr);
        cout << "After print(): " << ptr << endl;

        cout << "Before update(): " << t << endl;
        update(&t);
        cout << "After update(): " << t << endl;

        cout << "Before *p: " << *ptr << endl;
        update(ptr);
        cout << "After *p: " << *ptr << endl;

        int arr2[6] = {1,2,3,4,5,6};

        cout << "Sum is " << getSum(arr2,6) << endl;
        // cout << "PArt Sum is " << getSum(arr2+3,6) << endl;
        cout << "PArt Sum is " << getSum(arr2+3,3) << endl;


        /*
    Arr: 1 2 3 45 5 
    Ch: abcde
    p: 0x7ffd6afe14f0
    q: 0x7ffd6afe14ea
    z
    Before print(): 0x7ffd6afe14dc
    inside print(): 0x7ffd6afe14e0
    After print(): 0x7ffd6afe14dc
    Before update(): 5
    inside update(): 6
    After update(): 6
    Before *p: 6
    inside update(): 7
    After *p: 7
    Sum is 21
    PArt Sum is 2051024862


    */

        return 0;
    }
