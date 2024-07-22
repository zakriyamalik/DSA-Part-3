//#include <iostream>
//
//using namespace std;
//
//// Node structure for linked list
//template <typename KeyType, typename ValueType>
//struct Node {
//    KeyType key;
//    ValueType value;
//    Node* next;
//
//    Node(const KeyType& k, const ValueType& v) : key(k), value(v), next(nullptr) {}
//};
//
//// HashTable class with chaining using linked lists
//template <typename KeyType, typename ValueType>
//class HashTable {
//private:
//    static const int tableSize = 10;  // Size of the hash table
//    Node<KeyType, ValueType>* table[tableSize];  // Array of linked list heads
//
//public:
//    // Hash function to determine the index in the table
//    int hashFunction(const KeyType& key) {
//        // Simple hash function (for demonstration purposes)
//        return key % tableSize;
//    }
//
//    // Insert a key-value pair into the hash table
//    void insert(const KeyType& key, const ValueType& value) {
//        int index = hashFunction(key);
//        Node<KeyType, ValueType>* newNode = new Node<KeyType, ValueType>(key, value);
//
//        // Insert at the beginning of the linked list
//        newNode->next = table[index];
//        table[index] = newNode;
//    }
//
//    // Search for a key in the hash table
//    bool search(const KeyType& key, ValueType& result) {
//        int index = hashFunction(key);
//
//        // Search the linked list at the calculated index
//        Node<KeyType, ValueType>* current = table[index];
//        while (current != nullptr) {
//            if (current->key == key) {
//                result = current->value;
//                return true;  // Key found
//            }
//            current = current->next;
//        }
//
//        return false;  // Key not found
//    }
//
//    // Remove a key from the hash table
//    bool remove(const KeyType& key) {
//        int index = hashFunction(key);
//
//        // Search and remove the node from the linked list
//        Node<KeyType, ValueType>* current = table[index];
//        Node<KeyType, ValueType>* prev = nullptr;
//
//        while (current != nullptr) {
//            if (current->key == key) {
//                if (prev != nullptr)
//                    prev->next = current->next;
//                else
//                    table[index] = current->next;
//
//                delete current;
//                return true;  // Key removed
//            }
//
//            prev = current;
//            current = current->next;
//        }
//
//        return false;  // Key not found
//    }
//
//    // Display the contents of the hash table
//    void display() {
//        for (int i = 0; i < tableSize; ++i) {
//            cout << "Bucket " << i << ": ";
//            Node<KeyType, ValueType>* current = table[i];
//            while (current != nullptr) {
//                cout << "(" << current->key << ", " << current->value << ") ";
//                current = current->next;
//            }
//            cout << endl;
//        }
//    }
//};
//
//int main() {
//    HashTable<int, string> hashTable;
//
//    // Inserting key-value pairs
//    hashTable.insert(5, "Apple");
//    hashTable.insert(15, "Banana");
//    hashTable.insert(25, "Cherry");
//    hashTable.insert(6, "Date");
//
//    // Displaying the initial hash table
//    cout << "Initial Hash Table:" << endl;
//    hashTable.display();
//    cout << endl;
//
//    // Searching for a key
//    int searchKey = 15;
//    string searchResult;
//    if (hashTable.search(searchKey, searchResult))
//        cout << "Found: " << searchResult << endl;
//    else
//        cout << "Not Found" << endl;
//
//    // Removing a key
//    int removeKey = 15;
//    if (hashTable.remove(removeKey))
//        cout << "Key " << removeKey << " removed successfully." << endl;
//    else
//        cout << "Key " << removeKey << " not found." << endl;
//
//    // Displaying the hash table after removal
//    cout << "\nHash Table after Removal:" << endl;
//    hashTable.display();
//
//    return 0;
//}
