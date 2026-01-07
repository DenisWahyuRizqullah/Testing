// Render project cards dari data
function renderProjectCard(project) {
    const tagsHTML = project.tags.map(tag => `<span class="tech-tag">${tag}</span>`).join('');
    const linkHTML = project.link ? `<a href="${project.link}" class="project-link">Read More →</a>` : '';
    
    return `
        <div class="project-card" data-tags="${project.dataTags}">
            <div class="project-image">
                <img src="${project.image}" alt="${project.title} logo">
            </div>
            <div class="project-content">
                <h3>${project.title}</h3>
                <p class="project-date">${project.date}</p>
                <p class="project-description">${project.description}</p>
                <div class="project-tags">
                    ${tagsHTML}
                </div>
                ${linkHTML}
            </div>
        </div>
    `;
}

// Initialize projects grid
function initializeProjects() {
    const projectsGrid = document.getElementById('projectsGrid');
    if (!projectsGrid) return;
    
    projectsGrid.innerHTML = projectsData.map(renderProjectCard).join('');
    attachSearchListener();
}

// Attach search functionality
function attachSearchListener() {
    const searchInput = document.getElementById('searchInput');
    if (!searchInput) return;
    
    const projectCards = document.querySelectorAll('.project-card');

    searchInput.addEventListener('keyup', function () {
        const keyword = this.value.toLowerCase();

        projectCards.forEach(card => {
            const title = card.querySelector('.project-content h3')?.textContent.toLowerCase() || "";
            const dataTags = (card.getAttribute('data-tags') || "").toLowerCase();
            const realTags = Array.from(card.querySelectorAll('.tech-tag'))
                .map(t => t.textContent.toLowerCase())
                .join(' ');
            const combined = `${title} ${dataTags} ${realTags}`.trim();
            card.style.display = combined.includes(keyword) ? '' : 'none';
        });
    });
}

// Initialize when DOM is ready
document.addEventListener('DOMContentLoaded', initializeProjects);
