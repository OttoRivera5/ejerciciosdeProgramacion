using System;

namespace CalculoPromedioVentas
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Bienvenido al programa de cálculo de promedio de ventas por mes.");

          
            Console.Write("Por favor, ingrese su nombre: ");
            string nombre = Console.ReadLine();
            Console.Write("Ahora, ingrese su apellido: ");
            string apellido = Console.ReadLine();

            
            double[] ventasPorMes = new double[4];

        
            for (int i = 0; i < 4; i++)
            {
                Console.Write($"Ingrese las ventas del mes {(i + 1)}: ");
                ventasPorMes[i] = Convert.ToDouble(Console.ReadLine());
            }

            
            double totalVentas = 0;
            foreach (double venta in ventasPorMes)
            {
                totalVentas += venta;
            }

            double promedioVentas = totalVentas / 4;

            
            Console.WriteLine($"El promedio de ventas mensuales de {nombre} {apellido} es: {promedioVentas:C}");
        }
    }
}