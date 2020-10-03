class Animal {
	
	public void eat () {
		System.out.println("Animal eat");
	}
	
	public void sleep () {
		System.out.println("Animal sleep");
	}
}

class Bird extends Animal {

	@Override
	public void eat () {
		System.out.println("Bird eat");
	}
	
	@Override
	public void sleep () {
		System.out.println("Bird sleep");
	}
	
	public void fly () {
		System.out.println("Bird fly");
	}
}

public class inherit {

	public static void main(String[] args) {
		Animal animal = new Animal();
		animal.eat();
		animal.sleep();

		Bird bird = new Bird();
		bird.eat();
		bird.sleep();
		bird.fly();
	}

}
