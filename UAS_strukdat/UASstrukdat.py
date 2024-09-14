class Orang:
    def __init__(self, nama, orang_tua=None):
        self.nama = nama
        self.orang_tua = orang_tua
        self.anak_anak = []

    def tambah_anak(self, anak):
        anak.orang_tua = self
        self.anak_anak.append(anak)

    def tampilkan_pohon(self, level=0):
        print(' ' * level * 4 + self.nama)
        for anak in self.anak_anak:
            anak.tampilkan_pohon(level + 1)

# Membuat individu
kakek = Orang("Kakek")
ayah = Orang("Ayah")
paman = Orang("Paman")
anak1 = Orang("Anak1")
anak2 = Orang("Anak2")

# Menyusun pohon keluarga
kakek.tambah_anak(ayah)
kakek.tambah_anak(paman)
ayah.tambah_anak(anak1)
ayah.tambah_anak(anak2)

# Menampilkan pohon silsilah
kakek.tampilkan_pohon()
