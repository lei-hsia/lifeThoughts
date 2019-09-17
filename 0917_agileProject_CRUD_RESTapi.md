### 看了写了3-4个 REST api之后感觉突然顿悟了到底什么是真正的 REST API的implementation: 
### 表现在MVC (Spring)为例, 其实就是 service 中写对数据的CRUD的方法, 然后Controller中进行route, 每个具体的route表现为```@XXXMapping(xxx)```

e.g. 一个完整的MVC各个部分要写的东西: REST API步骤; 
e.g. CRUD操作中的R: find (by identifier):

M: ```package: repositories```
```

@Repository
public interface ProjectRepository extends CrudRepository<Project, Long> {
    
    Project findByProjectIdentifier(String projectId);
}
```

V: ```package: services```
```
public class ProjectService {
    ...
    
    @Autowired
    private ProjectRepository projectRepository;
    
    public Project findProjectByIdentifier(String projectId) {
        Project project = projectRepository.findByProjectIdentifier(projectId);
        
        if (project == null)
            throw new ProjectIdException("Project does not exist");
            
        return project;
    }
}
```

C: ```package: web```
```
@RestController
@RequestMapping("/api/project")
public class ProjectController {
    
    @Autowired
    private ProjectService projectService;
    
    @Autowired
    private MapValidationErrorService mapValidationErrorService;
    
    ...
    
    @GetMapping("/{projectId}")
    public ResponseEntity<?> getProjectById(@PathVariable String projectId) {
        
        Project project = projectService.findProjectByIdentifier(projectId);
        return new ResponseEntity<Project>(project, HttpStatus.OK);
    }
   
}
```
