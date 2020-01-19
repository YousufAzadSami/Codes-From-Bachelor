// Controlling the main Thread.
class ThreadExampleFromCompleteRef {
	
	public static void main(String args[]) {
		
		System.out.println("in main b4 initialization " + Thread.currentThread());
		Thread t = Thread.currentThread();
		//Thread t = new Thread(this);                                 EITA HOI NA, MAY BE STATIC TYPE KONO ISSUE
		
		System.out.println("after initialization,t: " + t);
		System.out.println("after initialization,Current thread: " + Thread.currentThread());
		
		// change the name of the thread
		t.setName("My Thread");
		System.out.println("After name change: " + t);
		
		try {
			for(int n = 5; n > 0; n--) {
				System.out.println(n);
				Thread.sleep(1000);
			}
		}catch (InterruptedException e) {
			System.out.println("Main thread interrupted");
		}
		
	}
}