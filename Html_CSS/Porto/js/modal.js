// js/modal.js

document.addEventListener('DOMContentLoaded', function() {
    // Modal functionality
    const modal = document.getElementById('contactModal');
    const infoBtn = document.getElementById('infoBtn');
    const infoContact = document.querySelector('.infoContact');
    const closeBtn = document.getElementById('closeModal');
    const copyBtn = document.querySelector('.copy-btn');

    // Buka modal
    if (infoBtn ) {
        infoBtn.addEventListener('click', function() {
            modal.style.display = 'block';
        });
    }
    if (infoContact ) {
        infoContact.addEventListener('click', function(event) {
            event.preventDefault(); // Mencegah scroll ke atas
            modal.style.display = 'block';
        });
    }
    
    // Tutup modal
    if (closeBtn) {
        closeBtn.addEventListener('click', function() {
            modal.style.display = 'none';
        });
    }

    // Tutup modal ketika klik di luar konten
    window.addEventListener('click', function(event) {
        if (event.target === modal) {
            modal.style.display = 'none';
        }
    });

    // Fungsi salin email
    if (copyBtn) {
        copyBtn.addEventListener('click', function() {
            const email = 'deniswahyu26@gmail.com';
            
            // Copy ke clipboard
            navigator.clipboard.writeText(email).then(function() {
                // Feedback visual
                const originalText = copyBtn.innerHTML;
                copyBtn.innerHTML = '<i class="fas fa-check"></i> Tersalin!';
                copyBtn.classList.add('copied');
                
                setTimeout(function() {
                    copyBtn.innerHTML = originalText;
                    copyBtn.classList.remove('copied');
                }, 2000);
            }).catch(function(err) {
                console.error('Gagal menyalin: ', err);
                // Fallback untuk browser lama
                const textArea = document.createElement('textarea');
                textArea.value = email;
                document.body.appendChild(textArea);
                textArea.select();
                document.execCommand('copy');
                document.body.removeChild(textArea);
                
                // Feedback visual
                const originalText = copyBtn.innerHTML;
                copyBtn.innerHTML = '<i class="fas fa-check"></i> Tersalin!';
                copyBtn.classList.add('copied');
                
                setTimeout(function() {
                    copyBtn.innerHTML = originalText;
                    copyBtn.classList.remove('copied');
                }, 2000);
            });
        });
    }

    // Tutup modal dengan ESC key
    document.addEventListener('keydown', function(event) {
        if (event.key === 'Escape') {
            if (modal.style.display === 'block') {
                modal.style.display = 'none';
            }
        }
    });
});