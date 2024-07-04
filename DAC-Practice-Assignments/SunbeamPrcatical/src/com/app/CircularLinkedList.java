package com.app;

import java.util.Scanner;

public class CircularLinkedList {
	static Scanner sc = new Scanner(System.in);
	static class Node {
		
		private Product product;
		private Node next;
		private Node prev;
		
		public Node(Product product){
			this.product = product;
			this.next = null;
			this.prev = null;
		}
	}
	
	private Node head;
	private Node tail;
	private int size;
	
	public CircularLinkedList() {
		head = null;
		size = 0;
	}
	
	public void displayForword() {
		if(head == null) {
			System.out.println("Linked list is null");
			return;
		}
		System.out.println("Printing LL in forward manner");
		
		
		Node trav = head;
		do {
			System.out.println("->" + trav.product);
			trav = trav.next;
		}
		while(trav != head); 
	}
	
	public void displayBackwords() {
		System.out.println("Printing LL in backword manner");
		Node trav = head.prev;
		
		do {
			System.out.print("->" + trav.product);
			trav = trav.next;
			
		}
		while(trav != tail);  
	}
	
	public void insertAtTail(Product product) {
		
		Node newNode = new Node(product);
		
		if(head==null) {
			head = newNode;
			tail = newNode;
			newNode.next = head;
			newNode.prev = head;
		}else {
			Node last = head.prev;
			last.next = newNode;
			newNode.next = head;
			newNode.prev = last;
			head.prev = newNode;
			tail = newNode;
		}
		size++;
	}
	
	public void insertAtHead(Product prod) {
		
		Node newNode = new Node(prod);
		if(head == null) {
			head = newNode;
			tail = newNode;
			newNode.next = head;
			newNode.prev = head;
		}else {
			newNode.next = head;
			newNode.prev = tail;
			head.prev = newNode;
			tail.next = newNode;
			head = newNode;
		}
		size++;
	}
	
	public void insertAtPosition(Product prod, int pos) {
		
		Node newNode = new Node(prod);
		if(head == null) {
			head = newNode;
			tail = newNode;
			newNode.next = head;
			newNode.prev = head;
		}else {
			newNode.next = head;
			newNode.prev = tail;
			head.prev = newNode;
			tail.next = newNode;
			head = newNode;
		}
		
		size++;
	}
	
	public void insertAtPos(Product prod, int pos) {
		if(pos > size) {
			throw new RuntimeException("Position is beyond the size of linkedlist");
		}

		Node newNode = new Node(prod);
		if(head == null) {
			head = newNode;
			newNode.next = head;
			newNode.prev = head;
			tail = newNode;
			
		} else if(pos == 1) {
			insertAtHead(prod);
			
		}else if(pos == size) {
			insertAtTail(prod);
			
		} else {
			Node beforePos = head;
			// 1 -> 2 -> 3->4
			//      ^
			//		|
			int position = pos - 2;
			while(position > 0) {
				beforePos = beforePos.next;
				position--;
			}
			
			Node afterPos = beforePos.next;
			
			beforePos.next = newNode;
			newNode.next = afterPos;
			newNode.prev = beforePos;
			afterPos.prev = newNode;
		}
		
		size++;	
	}
	
	public void displayProductById(int id) {
		Node trav = head;
		
		while(trav!= null) {
			if(trav.product.getId() == id) {
				System.out.println(trav.product);
				return;
			}
			trav = trav.next;
		}
		
		System.out.println("Product with id " + id + " Not found");
	}
	
	public void deleteProductAtFromFirstPos() {
		if(head == null) {
			throw new RuntimeException("Linkedlist is Empty!!");
		}
		if(size == 1) {
			head = null;
			tail = null;
		}else {
			Node trav = head.next;
			tail.next = trav;
			head = trav;
		}
		size--;
		
	}
	
	public void updateProductDetailsById(int id) {
		if(head == null) {
			System.out.println("Linked list is null");
			return;
		}
		
		Node trav = head;
		while(trav != null) {
			if(trav.product.getId() == id) {
				System.out.println("Enter name, type, price");
				trav.product = new Product(id, sc.next(), sc.next(), sc.nextDouble());
				return;
			}
			trav = trav.next;
		}
		
		System.out.println("Product with id: " + id + " Not Found");
	}
	
	public static void main(String[] args) {
		CircularLinkedList list = new CircularLinkedList();
		list.insertAtTail(new Product(1, "Himanshu", "Determinant", 60000));
		list.insertAtTail(new Product(2, "Viinay", "Ordinary", 20000));
		list.insertAtTail(new Product(3, "Shanti", "OverConfident", 10000));
		list.insertAtTail(new Product(4, "Khanna", "Extra", 50000));
		list.insertAtPos(new Product(0, "Anjani", "Lover", 90000), 4);
//		list.deleteProductAtFromFirstPos();
//		System.out.println("Size of the list is: " + list.size);
		list.displayForword();
		
		System.out.println();
		
//		list.displayProductById(3);
		list.updateProductDetailsById(9);
		list.displayForword();
		sc.close();
		
	}

	
}
