import java.util.Random;

public class Main {
	public static void main(String... args) {
		if (new Random().nextInt() % 2 == 1)
			System.out.println("Korea");
		else
			System.out.println("Yonsei");
	}
}
