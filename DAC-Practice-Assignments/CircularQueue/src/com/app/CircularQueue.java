package com.app;

public class CircularQueue {

	static class Queue{
		private String[] arr;
		private int front;
		private int rear;
		private int size;
		private int capacity;
		
		public Queue(int capacity) {
			this.capacity = capacity;
			this.arr = new String[capacity];
			this.front = -1;
			this.rear = -1;
			this.size = 0;
		}
		
		public boolean isFull() {
			return size == capacity;
		}
		
		public boolean isEmpty() {
			return size == 0;
		}
		
		public void enqueue(String data) {
			if(isFull()) {
				System.out.println("Queue is full");
				return;
			}
			
			if(front == -1) front++;
			
			rear = (rear + 1) % capacity;
			arr[rear] = data;
			size++;	
		}
		
		public String dequeue() {
			if(isEmpty()) {
				System.out.println("Queue is already empty!!");
				return null;
			}
			
			String data = arr[front];
			arr[front] = null;
			front = (front + 1) % capacity;
			size--;
			
			if(size == 0) {
				front = -1;
				rear = -1;
			} 
			
			return data;
		}

		public String peek() {
			if(isEmpty()) {
				System.out.println("Queue is Empty!!");
				return null;
			}
			
			return arr[front];
		}
		
		public int getSize() {
			return size;
		}
		
		public String toString() {
            if (isEmpty()) {
                return "Queue is empty";
            }
            StringBuilder sb = new StringBuilder();
            sb.append("Queue: ");
            for (int i = 0; i < size; i++) {
                int index = (front + i) % capacity;
                sb.append(arr[index]);
                if (i < size - 1) {
                    sb.append(" -> ");
                }
            }
            return sb.toString();
        }
	}
	
	public static void main(String[] args) {
		Queue q = new Queue(5);
	
		q.enqueue("one");
		q.enqueue("two");
		q.enqueue("three");
		q.enqueue("four");
		q.enqueue("five");
		
		Queue anotherQueue = q;
		System.out.println(anotherQueue.toString());
	}
	
}
