package minggu5; 
import java.util.Scanner;
    public class Mahasiswamain{
        public static void main(String[] args) {
            Scanner scan1 = new Scanner (System.in);
            Scanner scan2 = new Scanner(System.in);
    
            DaftarMahasiswaBerprestasi data  = new DaftarMahasiswaBerprestasi();
            int jumMhs = 5;
    
            for (int i =0; i<jumMhs; i++){
                System.out.println("Nama =");
                String nama = scan2.nextLine();
                System.out.println("Thn masuk =");
                int thn = scan1.nextInt();
                System.out.println("Umur =");
                int Umur = scan1.nextInt();
                System.out.println("IPK =");
                double ipk = scan1.nextDouble();
    
                Mahasiswa m = new Mahasiswa(nama, thn, Umur, ipk);
                data.tambah(m);
                
            }
            System.out.println("Data mahasiswa setelah sorting asc berdasar ipk =");
            data.selectionSort();
            data.tampil();
                scan1.close();
                scan2.close();
        }       
    }   

