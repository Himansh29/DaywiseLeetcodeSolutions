package com.linkedlist;

public class SinglyCircularLinkedList {

	static class Node{
		private int data;
		private Node next;
		
		public Node() {
			this.data = 0;
			this.next = null;
		}
		
		public Node(int data) {
			this.data = data;
			this.next = null;
		}
		
		
	}
	
	private Node head;
	public SinglyCircularLinkedList() {
		head = null;
	}
	
	public boolean isEmpty() {
		return head == null;
	}
	
	public void display() {
		//1: BASE CASE
		if(isEmpty()) {
			 System.out.println("Linked List is Empty!! :(");
			 return;
		 }
		
		// 2: adding temp pointer to traverse SLL
		 Node temp = head;
		 System.out.print("List: ");
		 
		 // 3: Do while because 
		 //    initially both head and temp are pointing to same memory Location 
		 do {
			 System.out.print(temp.data + "->");
			 temp = temp.next;
		 } while(temp != head);
	}
	
	public void addAtLast() {
		
	}
	
}
