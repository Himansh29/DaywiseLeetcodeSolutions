import java.util.ArrayList;

public class HashMapImple implements HashMap {
	
	int hashTableSize;
	ArrayList<Integer>[] buckets;
	
	@SuppressWarnings("unchecked")
	public HashMapImple() {
		this.hashTableSize = 10;
		this.buckets = new ArrayList[hashTableSize];
		
		for(int i = 0; i<hashTableSize; i++) {
			buckets[i] = new ArrayList<Integer>();
		}
	}

	@Override
	public void insert(int data) {
		int id = mod(data);
		buckets[id].add(data);
	}

	@Override
	public void get(int key) {
		
		int id = mod(key);
		System.out.println(buckets[id].contains(key));

	}

	@Override
	public void display() {
		for(int i = 0; i<buckets.length; i++) {
			System.out.print("Bucket " + i+ ": ");
			System.out.println(buckets[i]);
		}
	}

	@Override
	public int mod(Integer key) {
		return Math.abs(key % hashTableSize);
	}

}
