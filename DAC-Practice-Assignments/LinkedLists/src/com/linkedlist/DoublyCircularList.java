package com.linkedlist;
import java.util.Scanner;

public class DoublyCircularList {
    // Node class
    static class Node {

        private int data;
        private Node next;
        private Node prev;

        public Node() {
            data = 0;
            next = null;
            prev = null;
        }

        public Node(int val) {
            data = val;
            next = null;
            prev = null;
        }
    }

    // List class fields
    private Node head;

    // List class methods
    public DoublyCircularList() {
        head = null;
    }

    public void displayForward() {
        if (head == null) {
            System.out.println("List is empty.");
            return;
        }
        System.out.println("Fwd List: ");
        Node trav = head;
        do {
            System.out.println(trav.data);
            trav = trav.next;
        } while (trav != head);
    }

    public void displayReverse() {
        if (head == null) {
            System.out.println("List is empty.");
            return;
        }
        System.out.println("Rev List: ");
        Node trav = head.prev;
        do {
            System.out.println(trav.data);
            trav = trav.prev;
        } while (trav != head.prev);
    }

    public boolean isEmpty() {
        return head == null;
    }

    public void addLast(int val) {
    	// step 1: Creating new node
        Node newNode = new Node(val);
        // Base case what if head is pointing to null already? 
        if (head == null) {
            head = newNode;
            newNode.next = newNode;
            newNode.prev = newNode;
        } else {
        	// whenever we add new node into existing list
        	// we update 4 pointers 
        	// 1: last->last new's {2: newNode->next, 3: newNode->prev} 4:head->prev
            Node last = head.prev;
            last.next = newNode;
            newNode.prev = last;
            newNode.next = head;
            head.prev = newNode;
        }
    }

    public void addFirst(int val) {
        Node newNode = new Node(val);
        if (head == null) {
            head = newNode;
            newNode.next = newNode;
            newNode.prev = newNode;
        } else {
            Node last = head.prev;
            newNode.next = head;
            newNode.prev = last;
            head.prev = newNode;
            last.next = newNode;
            head = newNode;
        }
    }

    public void addAtPos(int val, int pos) {
    	// Corner case 
        if (head == null || pos <= 1) {
            addFirst(val);
        } else {
        	// 
            Node newNode = new Node(val);
            Node trav = head;
            for (int i = 1; i < pos - 1; i++) {
                trav = trav.next;
                if (trav == head) {
                    break;
                }
            }
            newNode.next = trav.next;
            newNode.prev = trav;
            trav.next.prev = newNode;
            trav.next = newNode;
        }
    }

    public void delFirst() {
        if (head == null) {
            throw new RuntimeException("List is empty.");
        }
        if (head.next == head) {
            head = null;
        } else {
            Node last = head.prev;
            head = head.next;
            head.prev = last;
            last.next = head;
        }
    }

    public void delAtPos(int pos) {
        if (head == null || pos < 1) {
            throw new RuntimeException("List is empty or Invalid position.");
        }
        Node trav = head;
        for (int i = 1; i < pos; i++) {
            trav = trav.next;
            if (trav == head) {
                throw new RuntimeException("Invalid position.");
            }
        }
        if (trav == head) {
            delFirst();
        } else {
            trav.prev.next = trav.next;
            trav.next.prev = trav.prev;
        }
    }
}

class DoublyCircularLinkedList {
    public static void main(String[] args) {
        int choice, val, pos;
        DoublyCircularList list = new DoublyCircularList();
        Scanner sc = new Scanner(System.in);
        do {
            System.out.println("\n0. Exit\n"
                    + "1. Display\n"
                    + "2. Add First\n"
                    + "3. Add Last\n"
                    + "4. Add At Pos\n"
                    + "5. Del First\n"
                    + "6. Del At Pos\n"
                    + "Enter choice: ");
            choice = sc.nextInt();
            switch (choice) {
                case 1: // Display
                    list.displayForward();
                    list.displayReverse();
                    break;
                case 2: // Add First
                    System.out.print("Enter new element: ");
                    val = sc.nextInt();
                    list.addFirst(val);
                    break;
                case 3: // Add Last
                    System.out.print("Enter new element: ");
                    val = sc.nextInt();
                    list.addLast(val);
                    break;
                case 4: // Add At Pos
                    System.out.print("Enter new element: ");
                    val = sc.nextInt();
                    System.out.print("Enter element position: ");
                    pos = sc.nextInt();
                    list.addAtPos(val, pos);
                    break;
                case 5: // Del First
                    try {
                        list.delFirst();
                    } catch (Exception e) {
                        System.out.println(e.getMessage());
                    }
                    break;
                case 6: // Del At Pos
                    System.out.print("Enter element position: ");
                    pos = sc.nextInt();
                    try {
                        list.delAtPos(pos);
                    } catch (Exception e) {
                        System.out.println(e.getMessage());
                    }
                    break;
            }
        } while (choice != 0);
        sc.close();
    }
}
