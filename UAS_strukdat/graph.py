import networkx as nx
import matplotlib.pyplot as plt

# Membuat graf kosong
G = nx.Graph()

# Menambahkan simpul (vertices)
G.add_nodes_from(['A', 'B', 'C', 'D'])

# Menambahkan sisi (edges)
G.add_edges_from([('A', 'B'), ('A', 'C'), ('B', 'C'), ('C', 'D')])

# Menggambar graf
pos = nx.spring_layout(G)  # Menggunakan layout spring
nx.draw(G, pos, with_labels=True, node_color='lightblue', node_size=500, edge_color='gray', font_size=16, font_weight='bold')

# Menampilkan graf
plt.show()

# Menentukan dan menampilkan derajat dari setiap vertex
derajat = dict(G.degree())
print("Derajat dari setiap vertex:")
for vertex, degree in derajat.items():
    print(f"Vertex {vertex}: Derajat {degree}")
