grafik = {
    'A': {'C': 4, 'B': 6},
    'B': {'D': 6, 'H': 8},
    'C': {'D': 6, 'E': 7},
    'D': {'F': 6, 'G': 5},
    'E': {'I': 12},
    'F': {'H': 2},
    'G': {'I': 7},
    'H': {'I': 7},
}

def jalur_terpendek(grafik, awal, akhir):
    jarak = {node: float('inf') for node in grafik}
    jarak[awal] = 0
    dikunjungi = set()
    saat_ini = awal

    while saat_ini!= akhir:
        dikunjungi.add(saat_ini)
        for tetangga, jarak_tetangga in grafik[saat_ini].items():
            if tetangga not in dikunjungi:
                jarak_baru = jarak[saat_ini] + jarak_tetangga
                if jarak_baru < jarak[tetangga]:
                    jarak[tetangga] = jarak_baru
        saat_ini = min(jarak, key=jarak.get)

    return jarak[akhir]

jarak_terpendek = jalur_terpendek(grafik, 'A', 'I')
print("Jalur terpendek dari A ke I:", jarak_terpendek)