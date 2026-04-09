import java.util.*;

class Matrix {
    private int n, m;
    private int[][] data;

    public Matrix(int n, int m) {
        this.m = m;
        this.n = n;
        this.data = new int[n][m];
    }

    public void nextMatrix(Scanner sc) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) data[i][j] = sc.nextInt();
        }
    }

    public Matrix mul(Matrix other) {
        Matrix res = new Matrix(this.n, other.m);
        for (int i  = 0; i < this.n; i++) {
            for (int j = 0; j < other.m; j++) {
                res.data[i][j] = 0;
                for (int k = 0; k < this.m; k++) res.data[i][j] += this.data[i][k] * other.data[k][j];
            }
        }
        return res;
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                sb.append(data[i][j]).append(" ");
            }
            sb.append("\n");
        }
        return sb.toString();
    }
}

public class S2a {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt(), m = sc.nextInt(), p = sc.nextInt();
        Matrix a = new Matrix(n,m);
        a.nextMatrix(sc);
        Matrix b = new Matrix(m,p);
        b.nextMatrix(sc);
        System.out.println(a.mul(b));
    }   
}
